As a Administrator, I want to manage Panoramic Image Collectors, so that I can ensure efficient and accurate image collection

As a Administrator, I want to manage Laboratory Administrators, so that I can oversee workflow of image related tasks

As a Administrator, I want to manage AI Model Administrators, so that I can ensure proper functioning of AI models

As a Administrator, I want to manage Website Maintainers, so that I can ensure website runs smoothly and efficiently



As a Panoramic Image Collector, I want to accept panoramic image collection requests, so that I can fulfill tasks assigned to me
{
    Basic Flow {
        (User) 1. the Panoramic Image Collector shall log in.
        (User) 2. the Panoramic Image Collector shall accept panoramic image collection requests.
        (User) 3. the Panoramic Image Collector shall collect new panoramic images to requests.
        (User) 4. the Panoramic Image Collector shall upload new panoramic images to requests.
        (System) 5. When new panoramic images are uploaded, the AIPC shall update panoramic images and panoramic image collection requests in database.
        (System) 6. the AIPC shall notify Laboratory Administrator of panoramic image collection request update.
    }
    Alternative Flow {
        A. At any time, system may encounter a validation error :
            1. System notify Panoramic Image Collector of error.
            2. Panoramic Image Collectorr correct quantities and resubmit update.
        B. At any time, system may fail to update inventory :
            1. System log error and notify Panoramic Image Collector.
            2. Panoramic Image Collector contact support for assistance.
    }
}

As a Panoramic Image Collector, I want to upload panoramic images, so that laboratory administrators can access and use them



As a Laboratory Administrator, I want to publish panoramic image collection requests, so that collectors can take required images
{
    Basic Flow {
        (User) 1. the Laboratory Administrator shall log in.
        (User) 2. the Laboratory Administrator shall create new panoramic image collection request.
        (User) 3. the Laboratory Administrator shall upload new panoramic image collection request.
        (System) 4. When panoramic image collection request is uploaded, the AIPC shall update panoramic image collection request in database.
        (System) 5. the AIPC shall notify Panoramic Image Collector of panoramic image collection request update.
    }
    Alternative Flow {
        A. At any time, system may encounter a validation error :
            1. System notify Laboratory Administrator of error.
            2. Laboratory Administrator correct quantities and resubmit update.
        B. At any time, system may fail to update inventory :
            1. System log error and notify Laboratory Administrator.
            2. Laboratory Administrator contact support for assistance.
    }
}

As a Laboratory Administrator, I want to manage panoramic trigger locations, so that users can access specific panoramic views on website
{
    Basic Flow {
        (User) 1. the Laboratory Administrator shall log in.
        (User) 2. the Laboratory Administrator shall access panoramic trigger location management interface.
        (User) 3. the Laboratory Administrator shall create edit or delete panoramic trigger locations.
        (User) 4. the Laboratory Administrator shall save changes to panoramic trigger locations.
        (System) 5. When changes are saved, the AIPC shall update panoramic trigger locations in database.
        (System) 6. the AIPC shall notify Website Maintainer of panoramic trigger location updates.
    }
    Alternative Flow {
        A. At any time, system may encounter a validation error :
            1. System notify Laboratory Administrator of error.
            2. Laboratory Administrator correct quantities and resubmit update.
        B. At any time, system may fail to update database :
            1. System log error and notify Laboratory Administrator.
            2. Laboratory Administrator contact support for assistance.
    }
}

As a Laboratory Administrator, I want to manage panoramic images, so that I can ensure quality and availability of images for users
{
    Basic Flow {
        (User) 1. the Laboratory Administrator shall log in.
        (User) 2. the Laboratory Administrator shall access panoramic image management interface.
        (User) 3. the Laboratory Administrator shall review and approve panoramic images uploaded by collectors.
        (User) 4. the Laboratory Administrator shall edit or delete panoramic images.
        (User) 5. the Laboratory Administrator shall save changes to panoramic images.
        (System) 6. When changes are saved, the AIPC shall update panoramic images in database.
        (System) 7. the AIPC shall notify Website Maintainer of panoramic image updates.
    }
    Alternative Flow {
        A. At any time, system may encounter a validation error :
            1. System notify Laboratory Administrator of error.
            2. Laboratory Administrator correct quantities and resubmit update.
        B. At any time, system may fail to update database :
            1. System log error and notify Laboratory Administrator.
            2. Laboratory Administrator contact support for assistance.
    }
}

As a Laboratory Administrator, I want to manage laboratory introductions, so that users can learn about laboratory and its features
{
    Basic Flow {
        (User) 1. the Laboratory Administrator shall log in.
        (User) 2. the Laboratory Administrator shall access laboratory introduction management interface.
        (User) 3. the Laboratory Administrator shall create edit or delete laboratory introductions.
        (User) 4. the Laboratory Administrator shall save changes to laboratory introductions.
        (System) 5. When changes are saved, the AIPC shall update laboratory introductions in database.
        (System) 6. the AIPC shall notify Website Maintainer of laboratory introduction updates.
    }
    Alternative Flow {
        A. At any time, system may encounter a validation error :
            1. System notify Laboratory Administrator of error.
            2. Laboratory Administrator correct quantities and resubmit update.
        B. At any time, system may fail to update database :
            1. System log error and notify Laboratory Administrator.
            2. Laboratory Administrator contact support for assistance.
    }
}


As a AI Model Administrator, I want to manage deployed LLMs, so that I can ensure their performance and accuracy

As a AI Model Administrator, I want to manage RAG databases, so that I can optimize AI model knowledge retrieval

As a AI Model Administrator, I want to manage TTS models, so that I can enhance user interaction through voice responses
{
    Basic Flow {
        (User) 1. the AI Model Administrator shall log in.
        (User) 2. the AI Model Administrator shall access TTS model management interface.
        (User) 3. the AI Model Administrator shall upload or update TTS models.
        (User) 4. the AI Model Administrator shall test TTS model for accuracy and performance.
        (User) 5. the AI Model Administrator shall deploy TTS model to production environment.
        (System) 6. When TTS model is deployed, the AIPC shall update model configuration in database.
        (System) 7. the AIPC shall notify Website Maintainer of TTS model updates.
    }
}

As a AI Model Administrator, I want to manage STT models, so that I can optimize voice interaction accuracy and enhance user experience



As a Website Maintainer, I want to review panoramic trigger locations, so that I can ensure they are appropriate and functional for users



As a User, I want to open website to view panoramic campus, so that I can explore campus virtually

As a User, I want to open VR view to see panoramic campus, so that I can have an immersive experience

As a User, I want to select panoramic trigger locations and view them, so that I can access specific areas of interest
{
    Basic Flow {
        (User) 1. the User shall open website and navigate to panoramic campus view.
        (User) 2. the User shall select a panoramic trigger location from available options.
        (System) 3. If selected location has a laboratory introduction, the system shall play associated WAV file.
        (System) 4. the system shall display panoramic view corresponding to selected trigger location.
    }
    Alternative Flow {
        A. At any time, selected location does not have a laboratory introduction :
            1. System displays a message indicating no introduction is available.
            2. System proceeds to display panoramic view.
        B. At any time, system fails to play WAV file :
            1. System logs error and displays a message to user.
            2. User can contact support for assistance.
    }
}

As a User, I want to interact with AI model through dialogue, so that I can get information or assistance about campus
{
    Basic Flow {
        (User) 1. the User shall open website and navigate to AI interaction interface.
        (User) 2. the User shall input a question or request information about campus.
        (System) 3. the system shall process user input using deployed AI model.
        (System) 4. the AI model shall generate a response and WAV based on input and available data.
        (System) 5. the system shall display response to user and play WAV.
        (System) 6. the system shall record interaction in database for future reference.
    }
    Alternative Flow {
        A. At any time, AI model cannot understand user input :
            1. System displays a message asking user to rephrase question.
            2. User can try again or contact support for assistance.
        B. At any time, system fails to generate a response :
            1. System logs error and displays a message to user.
            2. User can contact support for assistance.
      	C. At any time, system fails to play WAV file :
            1. System logs error and displays a message to user.
            2. User can contact support for assistance.
    }
}
