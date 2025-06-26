package com.example.techniciansassistant

import android.content.Intent
import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import android.widget.Button
//import kotlinx.android.synthetic.main.activity_otp.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets

        }

        //storing button ID's in variables
        val zeusbutton = findViewById<Button>(R.id.Zeus_start_button)

        //operations that happen when buttons are pressed
        zeusbutton?.setOnClickListener()
        {
            val intent = Intent(this, zeus_calculator::class.java)
            startActivity(intent)
        }
    }

}
class ZeusCalculator{
    external fun add()
}