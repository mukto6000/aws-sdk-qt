/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_TRANSCRIBESTREAMINGCLIENT_H
#define QTAWS_TRANSCRIBESTREAMINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstranscribestreamingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace TranscribeStreaming {

class TranscribeStreamingClientPrivate;
class StartMedicalStreamTranscriptionRequest;
class StartMedicalStreamTranscriptionResponse;
class StartStreamTranscriptionRequest;
class StartStreamTranscriptionResponse;

class QTAWSTRANSCRIBESTREAMING_EXPORT TranscribeStreamingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TranscribeStreamingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TranscribeStreamingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    StartMedicalStreamTranscriptionResponse * startMedicalStreamTranscription(const StartMedicalStreamTranscriptionRequest &request);
    StartStreamTranscriptionResponse * startStreamTranscription(const StartStreamTranscriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(TranscribeStreamingClient)
    Q_DISABLE_COPY(TranscribeStreamingClient)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
