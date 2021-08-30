package com.example.backgroundchange;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Color;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;

public class MainActivity extends AppCompatActivity {

    Button redbtn,greenbtn;
    LinearLayout layout;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        redbtn = findViewById(R.id.red);
        greenbtn = findViewById(R.id.green);
        layout = findViewById(R.id.linearlayout);

        redbtn.setOnClickListener(v -> {
//                layout.setBackgroundColor(Color.RED);
            layout.setBackgroundResource(R.color.black);

        });
        greenbtn.setOnClickListener(v -> {
//                layout.setBackgroundColor(Color.GREEN);
            layout.setBackgroundResource(R.color.purple_200);
        });

    }
}