package com.example.sensor;

import androidx.appcompat.app.AppCompatActivity;

import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.os.Bundle;
import android.widget.TextView;

import java.util.List;

public class MainActivity extends AppCompatActivity {
    TextView tv;
    SensorManager sm;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        tv=findViewById(R.id.t1);
        sm = (SensorManager) getSystemService (SENSOR_SERVICE);
        List<Sensor> mlist=sm.getSensorList(Sensor.TYPE_ALL);
        for(int i=1;i<mlist.size(); i++)
        {
            tv.append("\n"+mlist.get(i).getName());
        }
    }
}

