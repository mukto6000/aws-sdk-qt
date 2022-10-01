// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANALYSISREQUEST_H
#define QTAWS_CREATEANALYSISREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAnalysisRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateAnalysisRequest : public QuickSightRequest {

public:
    CreateAnalysisRequest(const CreateAnalysisRequest &other);
    CreateAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnalysisRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
