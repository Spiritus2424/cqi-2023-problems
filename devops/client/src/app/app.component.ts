import { Component, OnInit } from '@angular/core';
import Axios from "axios";

interface IHealthcheck {
  alive: boolean
}

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent implements OnInit {
  title = 'client';
  serverBaseUrl = 'http://localhost:3000'
  mongoOk = false;
  serverOk = false;

  ngOnInit(): void {
    Axios.get<IHealthcheck>(this.serverBaseUrl + '/healthcheck')
      .then(response => {
        // handle success
        this.serverOk = response.data.alive;
      })
      .catch( error => {
        // handle error
        console.log(error);
      });
    Axios.get<IHealthcheck>(this.serverBaseUrl + 'mongo')
      .then(response => {
        // handle success
        this.mongoOk = response.status == 200;
      })
      .catch( error => {
        // handle error
        this.mongoOk = false;
      });
  }
}
