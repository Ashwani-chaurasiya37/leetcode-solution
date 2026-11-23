class ProductOfNumbers {
public:
    vector<int> v;
    ProductOfNumbers() {}

    void add(int num) { 
        v.push_back(num);
         }

    int getProduct(int k) {
        int mul = 1;
        int i = v.size() - 1;
        while (k) {
            mul *= v[i--];
            k--;
        }
        return mul;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */