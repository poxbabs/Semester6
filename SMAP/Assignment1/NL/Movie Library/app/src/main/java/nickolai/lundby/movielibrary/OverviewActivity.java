package nickolai.lundby.movielibrary;

import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.support.annotation.Nullable;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ListView;
import android.widget.Toast;

import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;

public class OverviewActivity extends AppCompatActivity {

    // Variables
    ArrayList<Movie> arrayOfMovies;
    MovieAdapter movieAdapter;
    CSVReader csvReader;

    // Widgets
    Button btnExit;
    ListView listView;

    // Request constants
    public final static int REQUEST_EDIT = 100;
    public final static int REQUEST_DETAIL = 101;

    // Result constants
    public final static String RESULT_EDIT = "resultFromEdit";
    public final static String RESULT_DETAIL = "resultFromDetail";

    // Storage constants
    public final static String STORAGE_EDIT = "storageEdit";
    public final static String STORAGE_DETAIL = "storageDetail";

    // Content keys
    public final static String MOVIE_DETAILS_CONTENT = "movieDetailsContent";
    public final static String MOVIE_EDIT_CONTENT = "movieEditContent";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_overview);

        // Variable initialization
        InputStream inputStream = getResources().openRawResource(R.raw.movielist);
        csvReader = new CSVReader(inputStream);
        arrayOfMovies = new ArrayList<>();
        arrayOfMovies = csvReader.read();
        movieAdapter = new MovieAdapter(this, arrayOfMovies);

        // Widget initialization
        btnExit = findViewById(R.id.overview_btnExit);
        listView = findViewById(R.id.overview_listview_movies);
        listView.setAdapter(movieAdapter);

        // Listeners
        btnExit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                BtnExitClick();
            }
        });
    }

    public void DetailsClick(Intent intent)
    {
        startActivityForResult(intent, REQUEST_DETAIL);
    }

    public void EditClick(Intent intent)
    {
        startActivityForResult(intent, REQUEST_EDIT);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        switch(requestCode){
            case REQUEST_DETAIL:
                if (resultCode == RESULT_OK){
                    Toast.makeText(this, "Came back from details", Toast.LENGTH_SHORT).show();
                }
                else{

                }
                break;
            case REQUEST_EDIT:
                if (resultCode == RESULT_OK) {

                }
                else {

                }
                break;
            default:
                break;
        }
    }

    private void BtnExitClick()
    {
        finish();
        System.exit(0);
    }
}
