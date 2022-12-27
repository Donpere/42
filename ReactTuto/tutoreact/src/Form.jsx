import { getAllByPlaceholderText } from '@testing-library/react';
import React, { useState } from 'react';
import './App.css';

function Form(props) {
    const [name, setName] = useState("");
    const [password, setPassword] = useState("");

    const handleSubmit = (event) => {
        event.preventDefault();
 //       alert(`The name you entered was: ${name}`)
        if ((name === "bibi") && (password === "blabla"))
            props.setIsLogged(true)
        else alert('erreur dans les identifiants')
        
    }

    return (
        <div className='form-container'>
            <form className="form" onSubmit={handleSubmit}>
                <label>Enter your name:

                    <input
                        type="text"
                        value={name}
                        onChange={(e) => setName(e.target.value)}
                    />
                </label>

                <label>Enter your password:
                    <input
                        type="text"
                        value={password}
                        onChange={(e) => setPassword(e.target.value)}
                    />
                </label>

                <input type="submit" />

            </form>
        </div >
    )
}
export default Form;