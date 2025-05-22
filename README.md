## Learning C++ along with Opencv

### Progress :

- [x] Setup Environment
- [x] A program that open a photo
- [x] A program that open webcam.
- [ ] A program that adds effects to photo

---

### Resources :

> [!IMPORTANT]
> Resource are not limited to these only, there are hundreds of them available online if you have some problems with the resources given below please prefer to search online.

- C++ 
    - <a href="https://www.youtube.com/results?search_query=c%2B%2B+full+course" target="_blank">Basic Search of C++ course on Youtube</a>.
    - Learning c++ with <a href="https://learncpp.com" target="_blank">learncpp.com</a>.
    - Learning c++ with <a href="https://www.youtube.com/watch?v=-TkoO8Z07hI" target="_blank">C++ full course for free by Bro Code </a>.

- Opencv :
  - <a href="https://www.youtube.com/results?search_query=opencv+tutorial+c%2B%2B" target="_blank">Basic Search of Opencv Tutorial on Youtube</a>.
  - Learning opencv with <a href="https://github.com/spmallick/learnopencv" target="_blank">github.com/spmallick/learnopencv</a>.
  - Learning opencv with <a href="https://www.opencv-srf.com/p/introduction.html" target="_blank">opecv-srf.com/p/introduction.html</a>.
  - Learning opencv with <a href="https://www.youtube.com/watch?v=2FYm3GOonhk" target="_blank">Opencv 4 hours introduction by Murtaza's Workshop - Robotics and AI</a>.
  - Series of video on <a href="" target="_blank">Opencv with C++ series by Computer Vision Lab</a>.
 
---
 
## Compiling in a linux environment

### I use arch so i will be listing Arch-distros only :

- Must Have Packages :
    - Opencv
    - gcc/g++ packages
    - cmake (if you know how to use, well i don't know how to use)

- compiling for opencv4 : 
```bash
g++ main.cpp -o main `pkg-config --cflags --libs opencv4` 
```
