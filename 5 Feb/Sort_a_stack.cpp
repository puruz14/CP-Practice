void solve(int a, stack<int>& s){
    if(s.empty() || s.top()<=a){
        s.push(a);
        return;
    }
    int k = s.top();
    s.pop();
    solve(a,s);
    s.push(k);
}
void SortedStack :: sort()
{
   //Your code here
   if(s.size()==0)return;
   int a = s.top();
   s.pop();
   sort();
   solve(a,s);
}
