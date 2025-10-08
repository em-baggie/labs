import 'package:flutter/material.dart';

class Home extends StatefulWidget {
  const Home({super.key});

  @override
  State<Home> createState() => _HomeState();
}

class _HomeState extends State<Home> {
  Map data = {};

  @override
  Widget build(BuildContext context) {
    data = ModalRoute.of(context)?.settings.arguments as Map? ?? {};
    print(data);

    String bgImage = (data['isdaytime'] ?? false) ? 'day.png' : 'night.png';

    return Scaffold(
      body: Container(
        decoration: BoxDecoration(
          image: DecorationImage(
            image: AssetImage('images/$bgImage'),
            fit: BoxFit.cover,
          ),
        ),
        child: Padding(
          padding: const EdgeInsets.fromLTRB(0, 120.0, 0, 0),
          child: SafeArea(
            child: Column(
              children: <Widget>[
                TextButton.icon(
                  onPressed: () => Navigator.pushNamed(context, '/location'),
                  icon: Icon(Icons.edit_location, color: Colors.grey[300]),
                  label: Text(
                    'edit location',
                    style: TextStyle(color: Colors.grey[300]),
                  ),
                ),
                SizedBox(height: 20),
                Row(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: <Widget>[
                    Text(
                      data['location'],
                      style: TextStyle(
                        fontSize: 28.0,
                        letterSpacing: 2.0,
                        color: Colors.white,
                      ),
                    ),
                  ],
                ),
                SizedBox(height: 20),
                Text(
                  data['time'],
                  style: TextStyle(fontSize: 66.0, color: Colors.white),
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
