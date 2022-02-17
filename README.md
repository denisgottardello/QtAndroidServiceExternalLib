# QtAndroidServiceExternalLib
Qt Android service in an pure external c++ library

In order to have a working Qt Android service there are several steps to follow (Qt Creator 6.0.2 on Debian 11):

* The app and the service projects (.pro files) must be in the same folder. During the build the .so files will be generated in the same folder and, when the deploy tool will create the apk it will copy all them.

* In order to manage the gui project and the service project at the same time I have created a project called "QtAndroidCommons.pro"

* The service project called "QtAndroidLib01" must using "QAndroidService app(argc, argv);" and have to have these options:
```javascript
    QT += androidextras
    TEMPLATE = lib
    TARGET = QtAndroidLib01
    CONFIG += c++11 dll
```

* The app that have the service embedded have to have the class "QtAndroidService.java"

* The "QtAndroidService.java" have to have the onCreate() and onDestroy() functions

* The package declared in the "AndroidManifest.xml" file have to match the "QtAndroidService.java" package

* Pay attention at the service section of the "AndroidManifest.xml". It is very important what you will write in "android:name", "android:process", "android.app.lib_name"

* The example starts the service in demand by calling the static method callStaticMethod("serviceStart"). If you want you can start the service at boot time.
