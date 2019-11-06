const express = require('express');
const router = express.Router();
const MongoClient = require('mongodb').MongoClient;
const assert = require('assert');
 
// Connection URL
const url = 'mongodb://localhost:27017';

/* GET home page. */
router.get('/', (req, res) => {
  res.render('index', { title: 'Express' });
});

router.get('/healthcheck', (req, res) => {
  res.json({ "alive": true });
});

router.get('/mongo', async (req, res) => {
  await MongoClient.connect(url)
    .then(client => {
        res.status(200)
        .render('index', { title: 'Mongo Ok' });
    })
    .catch(err => {
        res.status(413)
        .render('error', { error: err });
    });
});

module.exports = router;
