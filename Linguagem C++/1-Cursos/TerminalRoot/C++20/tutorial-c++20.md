## - Utilizando módulos em C++20

```cpp
// math.cppm

export module math;

export int add(int fir, int sec){
    return fir + sec;
} 
```

---

```cpp
// main.cpp

import math;

int main(){
   
   add(2000, 20);
   
}
```

---

```sh
clang++ -std=c++2a -fmodules-ts --precompile math.cppm -o math.pcm                   // 1
clang++ -std=c++2a -fmodules-ts -c math.pcm -o math.o                                // 2
clang++ -std=c++2a -fmodules-ts -fprebuilt-module-path=. math.o main.cpp -o math     // 3
```
