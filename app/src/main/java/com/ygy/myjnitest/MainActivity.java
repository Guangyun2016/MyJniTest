package com.ygy.myjnitest;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends Activity {

    static {
        System.loadLibrary("hello-jni");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.txt);

        JNI jni = new JNI();
        tv.setText((String)jni.Hello());
        Toast.makeText(this, jni.Hello(), Toast.LENGTH_LONG).show();

    }
}
