// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONREQUEST_H
#define QTAWS_CREATEAPPLICATIONREQUEST_H

#include "elasticbeanstalkrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CreateApplicationRequestPrivate;

class QTAWSELASTICBEANSTALK_EXPORT CreateApplicationRequest : public ElasticBeanstalkRequest {

public:
    CreateApplicationRequest(const CreateApplicationRequest &other);
    CreateApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
