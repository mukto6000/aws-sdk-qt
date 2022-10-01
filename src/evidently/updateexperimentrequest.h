// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIMENTREQUEST_H
#define QTAWS_UPDATEEXPERIMENTREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateExperimentRequestPrivate;

class QTAWSEVIDENTLY_EXPORT UpdateExperimentRequest : public EvidentlyRequest {

public:
    UpdateExperimentRequest(const UpdateExperimentRequest &other);
    UpdateExperimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExperimentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
