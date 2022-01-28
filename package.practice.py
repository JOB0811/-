# animal package
# dog, cat modules
# dog, cat modules can say "hi"

# from animal import dog #animal 패키지에서 dog 라는 모듈(기능)을 갖고와줘.
# from animal import cat #animal 패키지에서 cat이라는 모듈(기능)을 갖고와줘.

# from animal import * # animal 패키지가 갖고있는 모든 모듈을 다 불러와줘


from geopy.geocoders import Nominatim
geolocator = Nominatim(user_agent="Wonbin")
location = geolocator.geocode("Seoul, South Korea")
print(location)