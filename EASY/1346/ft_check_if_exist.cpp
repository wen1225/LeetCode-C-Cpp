//1346. Check If N and Its Double Exist
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        if (arr.size() < 2 || arr.size() > 500)
            return false;
        else{
            for (int i = arr.size()-1; i >= 0; i--){
                for (int j = 0; j < arr.size(); j++){
                    if (2*arr[i] == arr[j] && i != j)
                        return true;
                }
            }
        return false;
        }
    }
};
