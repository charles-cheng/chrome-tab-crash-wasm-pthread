# chrome-tab-crash-wasm-pthread

### Demo
[Demo](https://charles-cheng.github.io/chrome-tab-crash-wasm-pthread/) in github page.

### Build
```
emcc main.c -pthread -s PTHREAD_POOL_SIZE=1 -s WASM=1 -o index.html
```
