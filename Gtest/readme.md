## Goal

a minimul setup to run getest, all sourcecode and os level commands comes from
https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/

after building the image, run following commands
```
docker build -t gtest .
docker run -it -v {host_machine_work_dir}:/{container_dir} gtest bash
```

now you are within the container run the same commands as stated in the blogpost, first go to your workdir, then
```
cmake CMakeLists.txt
make
./runTests
```
you should see that tests pass