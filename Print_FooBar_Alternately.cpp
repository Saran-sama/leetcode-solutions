class FooBar {
private:
    int n;
    std::mutex m;
    std::condition_variable cv;
    bool ready = false;
public:
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            std::unique_lock<std::mutex> lck(m);
            ready = true;
        	printFoo();
            cv.notify_one();            

        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
                std::unique_lock<std::mutex> lck(m);
                while (!ready) cv.wait(lck);
        	        printBar();
                    ready = false;
        }
    }
};