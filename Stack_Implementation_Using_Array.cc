// class Stack
// {
//     int *arr;
//     int index;
//     int size;

// public:
//     Stack(int capacity)
//     {
//         this->size = capacity;
//         arr = new int[size];
//         index = -1;
//     }

//     void push(int num)
//     {
//         if (size - index > 1)
//         {
//             index++;
//             arr[index] = num;
//         }
//         else
//         {
//             return;
//         }
//     }

//     int pop()
//     {
//         if (index >= 0)
//         {
//             int ans = arr[index];
//             index--;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     int top()
//     {
//         if (index >= 0)
//         {
//             int ans = arr[index];
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     int isEmpty()
//     {
//         if (index == -1)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }

//     int isFull()
//     {
//         if (index == size - 1)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// };
