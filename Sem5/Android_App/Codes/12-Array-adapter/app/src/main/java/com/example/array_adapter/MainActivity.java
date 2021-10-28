package com.example.array_adapter;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class MainActivity extends AppCompatActivity {
    ListView obj1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        obj1 = findViewById(R.id.list1);

        String progList[] = {"Html" , "Java" , "Css" , "Javascript" ,"React Js" };

        ArrayAdapter<String> obj_ad = new ArrayAdapter<String>(this,R.layout.item_view,R.id.text1,progList);
        obj1.setAdapter(obj_ad);
    }
}
