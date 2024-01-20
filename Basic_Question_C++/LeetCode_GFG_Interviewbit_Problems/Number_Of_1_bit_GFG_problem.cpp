// todo: The problem says that, you're given a positive integer N and your task is to count the number of set bits in the number.

// Example: N=10

// Explanation: the binary representation of 10 is "1010".

// So the number of set bits will be 2.

// todo: The first approach that will come to your mind after looking at the problem is simply converting the number into it's binary form and then counting the number of set bits as I've explained in the example above.

// class Solution{
//     public:
//     int setBits(int N) {
        
//         int setBits =0;
        
//         while(N!=0)
//         {
//             int rem = N%2;
            
//             if(rem==1)
//             setBits++;
            
//             N = N/2;
//         }
        
//         return setBits;
//     }
// };
  
// todo: The problem is we are iterating over all the bits in order to count the set bits. However we can count all the sets bits without iterating through the 0 bits.

// todo: Sounds interesting? Well this approach was given by Brian Kernighan.

// Brian Kernighan is a Canadian computer scientis and well known for being the CO-Author of the first book on C programming language with Dennis Ritchie.

// Brian made a wonderful observation that when we subtract a number by 1 then all the bits after and at the rightmost set bit gets flipped. Below diagram shows the same.


// todo: One more important observation is:

// When we do (&) operation of (N) with (N-1) so the rightmost set becomes unset.

// N&(N-1) will unset rightmost set bit.

// todo: The idea is to keep unsetting the rightmost set bit till the number becomes zero.

// Solution

// todo:                            class Solution {
// todo:                             public:
// todo:                             int setBits(int N) {
    
// todo:                              int setBits =0;
        
// todo:                              while(N>0)
// todo:                              {
// todo:                                N = N&(N-1);
// todo:                                setBits++;
// todo:                               }
        
// todo:                               return setBits;

// todo:                              }
// todo:                            };



