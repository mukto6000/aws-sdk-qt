// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONMETADATAREQUEST_H
#define QTAWS_UPDATEDETECTORVERSIONMETADATAREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionMetadataRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateDetectorVersionMetadataRequest : public FraudDetectorRequest {

public:
    UpdateDetectorVersionMetadataRequest(const UpdateDetectorVersionMetadataRequest &other);
    UpdateDetectorVersionMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorVersionMetadataRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
