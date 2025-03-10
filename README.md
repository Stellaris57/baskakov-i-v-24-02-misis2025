# baskakov-i-v-24-02-misis2025

Cоздал репризиторий на GitHub и склонировал на свой пк.

Настройка CMake: Создал папку src, внутри нее создал main.cpp, utils.cpp. Написал программы, выполняющие сложение и вычитание. В корне репозитория создал CMakeLists.txt, заполнил его. Собрал проект с помощью CMake.

(mkdir build
cd build
cmake ..
cmake --build .)
проверил работу программы, открыв exe файл.

Работа с Git 
Инициализировал Git (git init) 
Добавил все файлы в репозиторий и сделал коммит
( git add .
git commit -m "Initial commit: CMake project setup" )

Переключился на новую ветку (git checkout -b feature-utils)
Внес изменения в main.cpp (добавил вывод умножения)
Также закоммитил

Переключил на основную ветку (git checkout main)
Изменил main.cpp, закоммитил.

Попытался слить, конфликтов не возникло. Сохранил изменения, еще раз закоммитил основную ветку и отправил все ветки и коммиты в удаленный репризиторий. ( git push --all origin ).
