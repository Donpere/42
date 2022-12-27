import React, { useState } from 'react';
import './App.css';

function Welcome(props) {
    return (<div className="welcome">
        Bonjour, {props.name}
    </div>);
}
export default Welcome;