import React, { useState } from 'react';
import './App.css';

function Form(){
    return (
        
        // <form>
        // <input type="range"></input>
        // <input type="radio"></input>
        // <input type="selector"></input>
        // </form>

            <form>
              <label>
                <p>Username</p>
                <input type="text" />
              </label>
              <label>
                <p>Password</p>
                <input type="password" />
              </label>
              <div>
                <button type="submit">Submit</button>
              </div>
            </form>
          )

}
export default Form;