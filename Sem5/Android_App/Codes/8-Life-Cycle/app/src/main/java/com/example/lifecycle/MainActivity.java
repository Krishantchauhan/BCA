package com.example.lifecycle;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    public static final String status=MainActivity.class.getSimpleName();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.i(status,"In Method OnCreate");
    }

    @Override
    protected void onStart() {
        super.onStart();
        Log.i(status,"In Method ONStart");
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.i(status,"In Method OnResume");
    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.i(status,"In Method OnPause");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.i(status,"In Method OnRestart");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.i(status,"In Method OnDestroy");
    }
}