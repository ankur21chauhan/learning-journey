# why 2 and 2 
copilot answer 
Bahut sahi sawal hai!
Aapke code me:


while(pq.empty()==false){    cout<<pq.top()<<" ";    pq.pop();}cout<<endl;cout<<pq.top()<<endl;pq.pop();cout<<pq.top()<<endl;


Jab aap while loop chalate ho, toh pq ke saare elements pop ho jaate hain, queue khali ho jaati hai.

Iske baad jab aap cout<<pq.top()<<endl; likhte ho, toh actually pq me koi element bacha hi nahi hota, lekin kuch compilers undefined behavior dikhate hain (kabhi garbage value, kabhi last value, kabhi crash).

Aapko 2 aur 2 output mil raha hai kyunki:

Jab queue khali ho jaati hai, pq.top() ka result undefined hota hai.
Kabhi kabhi last pop kiya hua value ya memory ka kuch part dikh jata hai, isliye 2 print ho raha hai.
Sahi approach:
Jab queue khali ho jaaye, uske baad pq.top() use nahi karna chahiye.
Hamesha pehle check karo pq.empty().

Example:


if(!pq.empty()) cout << pq.top() << endl;
Summary:

While loop ke baad pq khali ho jaata hai.
Khali queue par top() call karna galat hai, isliye 2 dikh raha hai (undefined behavior).
Sahi output tabhi milega jab aap khali queue par top() na call karo.
Aapko output 2 2 mil raha hai kyunki memory me last value dikh rahi hai, lekin logically pq me kuch nahi bacha.