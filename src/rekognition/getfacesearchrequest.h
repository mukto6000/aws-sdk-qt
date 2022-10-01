// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFACESEARCHREQUEST_H
#define QTAWS_GETFACESEARCHREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetFaceSearchRequestPrivate;

class QTAWSREKOGNITION_EXPORT GetFaceSearchRequest : public RekognitionRequest {

public:
    GetFaceSearchRequest(const GetFaceSearchRequest &other);
    GetFaceSearchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFaceSearchRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
