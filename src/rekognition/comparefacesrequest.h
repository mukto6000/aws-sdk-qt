// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPAREFACESREQUEST_H
#define QTAWS_COMPAREFACESREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class CompareFacesRequestPrivate;

class QTAWSREKOGNITION_EXPORT CompareFacesRequest : public RekognitionRequest {

public:
    CompareFacesRequest(const CompareFacesRequest &other);
    CompareFacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompareFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
