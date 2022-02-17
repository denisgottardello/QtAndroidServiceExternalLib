package it.denisgottardello.qtandroidserviceexternallib;

public class QtAndroidService extends org.qtproject.qt5.android.bindings.QtService {

    private static final String TAG= "QtAndroidService";

    @Override
    public void onCreate() {
        android.util.Log.i(TAG, "The service has been created0");
        android.util.Log.i(TAG, "The service has been created1");
        android.util.Log.i(TAG, "The service has been created2");
        android.util.Log.i(TAG, "The service has been created3");
        android.util.Log.i(TAG, "The service has been created4");
        android.util.Log.i(TAG, "The service has been created5");
        android.util.Log.i(TAG, "The service has been created6");
        android.util.Log.i(TAG, "The service has been created7");
        android.util.Log.i(TAG, "The service has been created8");
        android.util.Log.i(TAG, "The service has been created9");
        super.onCreate();
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        android.util.Log.i(TAG, "The service has been destroied0");
        android.util.Log.i(TAG, "The service has been destroied1");
        android.util.Log.i(TAG, "The service has been destroied2");
        android.util.Log.i(TAG, "The service has been destroied3");
        android.util.Log.i(TAG, "The service has been destroied4");
        android.util.Log.i(TAG, "The service has been destroied5");
        android.util.Log.i(TAG, "The service has been destroied6");
        android.util.Log.i(TAG, "The service has been destroied7");
        android.util.Log.i(TAG, "The service has been destroied8");
        android.util.Log.i(TAG, "The service has been destroied9");
    }

    public static void serviceStart(android.content.Context context) {
        android.content.Intent pQtAndroidService= new android.content.Intent(context, QtAndroidService.class);
        pQtAndroidService.addFlags(android.content.Intent.FLAG_ACTIVITY_NEW_TASK);
        context.startService(pQtAndroidService);
    }

    public static void serviceStop(android.content.Context context) {
        android.content.Intent pQtAndroidService= new android.content.Intent(context, QtAndroidService.class);
        context.stopService(pQtAndroidService);
    }

}
