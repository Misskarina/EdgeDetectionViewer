# EdgeDetectionViewer
Android + OpenCV + OpenGL R&amp;D Assignment
# 🧪 Real-Time Edge Detection Viewer  
**Software Engineering Intern (R&D) Assignment**

---

## 🚀 Overview
This project demonstrates real-time **edge detection** on Android using:
- **Camera Feed (Java/Kotlin)**
- **OpenCV (C++)** for image processing via **JNI**
- **OpenGL ES 2.0** for rendering processed frames
- A simple **TypeScript-based web viewer** for displaying sample processed frames

---

## 🧩 Folder Structure
- /app → Android (Java/Kotlin)
- /jni → C++ OpenCV code
- /gl → OpenGL renderer
- /web → TypeScript web viewer

## 🧩 Key Components
### 📱 Android (Java/Kotlin)
- Handles **camera feed** using `TextureView` or `Camera2 API`.
- Passes frames to native C++ via **JNI**.
- Displays processed frames using **OpenGL ES 2.0**.

### ⚙️ Native (C++ / OpenCV)
- Processes each frame using **OpenCV** (e.g., Canny Edge Detection / Grayscale).
- Communicates back to Android through **JNI**.

### 🎨 OpenGL ES
- Renders processed frames in real time.
- Can be extended to include shaders or filters.

### 🌐 Web Viewer (TypeScript)
- Displays a **sample processed frame** (static or base64).
- Demonstrates TypeScript DOM manipulation and modular project setup.


---

## 🧠 Architecture Summary
1. Android captures live camera frames.  
2. Frames are sent via **JNI** to **C++**.  
3. **OpenCV** processes the image (edges/grayscale).  
4. Processed image is rendered using **OpenGL ES**.  
5. A sample frame is exported for the **web viewer**.

---

## 🧰 Technologies Used
| Layer | Technology |
|--------|-------------|
| Mobile | Android (Java/Kotlin) |
| Native | C++ with NDK |
| Processing | OpenCV |
| Rendering | OpenGL ES 2.0 |
| Web | TypeScript, HTML, CSS |

---

## 📦 Git Repository Usage
This repository is structured for educational and submission purposes.  
Each folder represents a real component of the final integrated app.  
All commits should clearly describe changes, for example:



---

## 👩‍💻 Author  
**Karina Kumari**  
📍 Bangalore, India  
📧 [karinakumari907ce@gmail.com]  
💻 Passionate about Android, C++, and Computer Vision  

---

## 🏁 License  
This repository is created for **educational and assessment purposes** only.  
© 2025 Karina Kumari. All rights reserved.

