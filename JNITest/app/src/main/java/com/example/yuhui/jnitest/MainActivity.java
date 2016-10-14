package com.example.yuhui.jnitest;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import com.example.yuhui.jnitest.jni.JniUtil;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tvMain = (TextView) findViewById(R.id.tv_main);
        JniUtil jni = new JniUtil();
        tvMain.setText(jni.append("abc", "123") + "");
    }
}
