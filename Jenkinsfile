pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build') {
            steps {
                sh 'make'
            }
        }

        stage('Run') {
            steps {
                sh './app'
            }
        }
    }

    post {
        always {
            archiveArtifacts artifacts: 'app', fingerprint: true
        }
    }
}