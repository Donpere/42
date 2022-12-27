import React, { useState } from 'react';
import './App.css';
import Home from './Home';
import Form from './Form';

function Page(){
    const [isLogged, setIsLogged]=useState(false)
    return (
        <div>
            {
                isLogged 
                ? <Home/>
                : <Form isLogged={isLogged} setIsLogged={setIsLogged}/>
            }

        </div>

    )
}
export default Page;