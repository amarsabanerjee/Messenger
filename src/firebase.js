
import firebase from 'firebase/compat/app';
import 'firebase/compat/auth';
import 'firebase/compat/firestore';

const firebaseConfig = {
    apiKey: "AIzaSyDVq74hP1r6ucUPm4zqDEQ1nZkX21mMw10",
    authDomain: "whatsapp-clone-3b92a.firebaseapp.com",
    projectId: "whatsapp-clone-3b92a",
    storageBucket: "whatsapp-clone-3b92a.appspot.com",
    messagingSenderId: "576742459247",
    appId: "1:576742459247:web:2b8edf8316688da2ac0a9a"
  };


  //this special line of code connects everything
const firebaseApp = firebase.initializeApp(firebaseConfig);



//this is for database connection
const db = firebaseApp.firestore();

const auth = firebase.auth();
const provider = new firebase.auth.GoogleAuthProvider();
export {auth,provider}
export default db;