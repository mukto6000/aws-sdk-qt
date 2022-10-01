// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCRIPTREQUEST_H
#define QTAWS_DELETESCRIPTREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteScriptRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteScriptRequest : public GameLiftRequest {

public:
    DeleteScriptRequest(const DeleteScriptRequest &other);
    DeleteScriptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScriptRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
