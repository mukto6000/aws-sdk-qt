// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPERIENCEREQUEST_H
#define QTAWS_UPDATEEXPERIENCEREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class UpdateExperienceRequestPrivate;

class QTAWSKENDRA_EXPORT UpdateExperienceRequest : public KendraRequest {

public:
    UpdateExperienceRequest(const UpdateExperienceRequest &other);
    UpdateExperienceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
