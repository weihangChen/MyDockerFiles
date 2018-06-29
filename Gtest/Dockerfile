FROM ubuntu
RUN apt-get update && \
apt-get -y install build-essential \
g++ \ 
cmake \
libgtest-dev && \
cd /usr/src/gtest && \
cmake CMakeLists.txt && \
make && \
cp *.a /usr/lib