#ifndef MOAICORE_CONFIG_H

<<<<<<< HEAD
	#define MOAICORE_CONFIG_H

	#ifndef MOAI_WITH_BOX2D
		#define MOAI_WITH_BOX2D 0
	#endif

	#ifndef MOAI_WITH_CHIPMUNK
		#define MOAI_WITH_CHIPMUNK 0
	#endif

	#ifndef MOAI_WITH_EXPAT
		#define MOAI_WITH_EXPAT 0
	#endif
	
	#ifndef MOAI_WITH_FREETYPE
		#define MOAI_WITH_FREETYPE 0
	#endif

	#ifndef MOAI_WITH_GPB
		#define MOAI_WITH_GPB 0
	#endif
	
	#ifndef MOAI_WITH_JANSSON
		#define MOAI_WITH_JANSSON 0
	#endif
	
	#ifndef MOAI_WITH_LIBCRYPTO
		#define MOAI_WITH_LIBCRYPTO 0
	#endif
	
	#ifndef MOAI_WITH_LIBCURL
		#define MOAI_WITH_LIBCURL 0
	#endif
	
	#ifndef MOAI_WITH_LIBJPG
		#define MOAI_WITH_LIBJPG 0
	#endif
	
	#ifndef MOAI_WITH_LIBPNG
		#define MOAI_WITH_LIBPNG 0
	#endif
	
	#ifndef MOAI_WITH_OGG
		#define MOAI_WITH_OGG 1
	#endif
	
	#ifndef MOAI_WITH_OPENGLES1
		#define MOAI_WITH_OPENGLES1 0
	#endif
=======
#ifndef USE_BOX2D
	#define USE_BOX2D 0
#endif

#ifndef USE_CHIPMUNK
	#define USE_CHIPMUNK 0
#endif

#ifndef USE_CURL
	#define USE_CURL 0
#endif

#ifndef USE_FREETYPE
	#define USE_FREETYPE 0
#endif

#ifndef USE_OPENGLES1
	#define USE_OPENGLES1 0
#endif

#ifndef USE_SQL
	#define USE_SQL 0
#endif

#ifndef USE_OPENSSL
	#define USE_OPENSSL 0
#endif

#ifndef USE_TINYXML
	#define USE_TINYXML 0
#endif

#ifndef USE_JPG
	#define USE_JPG 0
#endif

#ifndef USE_PNG
	#define USE_PNG 0
#endif

#ifndef USE_JSON
	#define USE_JSON 0
#endif

#ifndef USE_SFMT
	#define USE_SFMT 0
#endif
>>>>>>> [CMake] Initial project setup

	#ifndef MOAI_WITH_OPENSSL
		#define MOAI_WITH_OPENSSL 0
	#endif
	
	#ifndef MOAI_WITH_TINYXML
		#define MOAI_WITH_TINYXML 0
	#endif
	
	#ifndef MOAI_WITH_SFMT
		#define MOAI_WITH_SFMT 0
	#endif
	
	#ifndef MOAI_WITH_SQLITE
		#define MOAI_WITH_SQLITE 0
	#endif
	
	#ifndef MOAI_WITH_TLSF
		#define MOAI_WITH_TLSF 1
	#endif
	
	#ifndef MOAI_WITH_VORBIS
		#define MOAI_WITH_VORBIS 1
	#endif
	
#endif
