// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESKILLGROUPREQUEST_H
#define QTAWS_UPDATESKILLGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateSkillGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateSkillGroupRequest : public AlexaForBusinessRequest {

public:
    UpdateSkillGroupRequest(const UpdateSkillGroupRequest &other);
    UpdateSkillGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
