// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACEDETECTIONRESPONSE_P_H
#define QTAWS_GETFACEDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetFaceDetectionResponse;

class GetFaceDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit GetFaceDetectionResponsePrivate(GetFaceDetectionResponse * const q);

    void parseGetFaceDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFaceDetectionResponse)
    Q_DISABLE_COPY(GetFaceDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
