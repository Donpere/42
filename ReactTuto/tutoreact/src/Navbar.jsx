import React, { useState } from 'react';
import './App.css';


function Navbar() {
    const [isActive, setIsActive] = useState(false);

    return (
        <div className="navbar">
            <nav>
                <ul>
                    <button onClick={() => setIsActive(!isActive)} className={`${isActive ? "red" : "green"}`}>
                        <li>Menu</li></button>
                    <li>Page</li>
                    <li>Contact</li>
                    <li>Salut</li>
                </ul>
            </nav>
        </div >
    )
}
export default Navbar;