﻿using UnityEngine;
using System.Collections;

public class ObjectBase : MonoBehaviour
{

    public virtual void TouchBegan(Touch touch, Vector2 screenSize)
    {
        Debug.Log("Override TouchBegan");
    }

	public virtual void TouchMove()
	{
        Debug.Log("Override TouchMove");
	}

    public virtual void TouchEnded()
    {
		Debug.Log("Override TouchEnded");
	}

    public virtual void MouseButtonDown()
    {
        Debug.Log("MouseButtonDown");
    }

}