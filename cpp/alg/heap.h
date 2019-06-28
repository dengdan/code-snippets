#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class HeapSort {
public:
    void Insert(const T& v) {
        tree_.push_back(v);
    	int child_idx = tree_.size() - 1, parent_idx;
	    while(GetParentIdx(child_idx, &parent_idx)) {
    		if(tree_[parent_idx] > tree_[child_idx]) {
	    		Swap(parent_idx, child_idx);
		    	child_idx = parent_idx;
	    	}else{
	    		break;
	    	}
	    }
    }
    
    bool Empty() const {
        return tree_.empty();
    }
    
    T Pop() {
    	T root_val = tree_[0];
    	tree_[0] = tree_.back();
	    tree_.pop_back();
	    int root_idx = 0, child_idx;
	    while(GetLeftChildIdx(root_idx, &child_idx)){
	    	if(child_idx + 1 < tree_.size() && tree_[child_idx + 1] < tree_[child_idx]) {
	    		child_idx += 1;
	    	}
		    if(tree_[child_idx] < tree_[root_idx]) {
     	    	Swap(child_idx, root_idx);
        		root_idx = child_idx;
		    }else {
		    	break;
		    }
	    }
	    return root_val;
    }
    
private:
    vector<T> tree_;
    bool GetParentIdx(const int idx, int* parent_idx) const {
	    if(idx < 1) return false;
	    *parent_idx = (idx - 1) / 2;
	    return true;
    }

    bool GetLeftChildIdx(const int idx, int* left_child_idx) const {
	    int temp = (idx * 2) + 1;
	    if(temp >= tree_.size()){
	    	return false;
	    }
	    *left_child_idx = temp;
	    return true;
    }
    void Swap(const int idx1, const int idx2){
	    T temp = tree_[idx1];
	    tree_[idx1] = tree_[idx2];
	    tree_[idx2] = temp;
    }
};


