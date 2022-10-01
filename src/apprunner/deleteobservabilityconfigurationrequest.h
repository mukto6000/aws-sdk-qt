// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBSERVABILITYCONFIGURATIONREQUEST_H
#define QTAWS_DELETEOBSERVABILITYCONFIGURATIONREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteObservabilityConfigurationRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DeleteObservabilityConfigurationRequest : public AppRunnerRequest {

public:
    DeleteObservabilityConfigurationRequest(const DeleteObservabilityConfigurationRequest &other);
    DeleteObservabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObservabilityConfigurationRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
