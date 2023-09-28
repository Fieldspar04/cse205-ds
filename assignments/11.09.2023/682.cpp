// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         stack<int> st;
//         for(int i=0;i<operations.size();i++){
//         string c=operations[i];
//             if(c == "D"){
//                 if(st.empty()){
//                     continue;
//                 }
//                 int temp = st.top() * 2;
               
//                 st.push(temp);
               
//             }
//             else if(c == "C"){
//                 if(!st.empty()){
//                     st.pop();
//                 }
             
//    }
//             else if(c == "+"){
//                if(st.size()>1){
//                 int temp = st.top();
//                 st.pop();
//                 int temp2 = temp + st.top();
//                 st.push(temp);
//                 st.push(temp2);
//                  }

//             }
//            else{
//             int score = stoi(c);
//             st.push(score);
//            }
//         }
//         int sum = 0;
//         while(!st.empty()){
//             sum += st.top();
//             st.pop();
//         }
//         return sum;
//     }
// };

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (const auto& c : operations) {
            if (c == "D") {
                if (!st.empty()) {
                    int temp = st.top() * 2;
                    st.push(temp);
                }
            }
            else if (c == "C") {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else if (c == "+") {
                if (st.size() >= 2) {
                    int temp = st.top();
                    st.pop();
                    int temp2 = temp + st.top();
                    st.push(temp);
                    st.push(temp2);
                }
            }
            else {
                try {
                    int score = std::stoi(c);
                    st.push(score);
                }
                catch (const std::invalid_argument& e) {
                    // Handle the case where 'c' is not a valid integer
                    // You can choose to ignore it or handle it differently
                }
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
