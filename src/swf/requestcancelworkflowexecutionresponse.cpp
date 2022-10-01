// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "requestcancelworkflowexecutionresponse.h"
#include "requestcancelworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RequestCancelWorkflowExecutionResponse
 * \brief The RequestCancelWorkflowExecutionResponse class provides an interace for Swf RequestCancelWorkflowExecution responses.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::requestCancelWorkflowExecution
 */

/*!
 * Constructs a RequestCancelWorkflowExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
RequestCancelWorkflowExecutionResponse::RequestCancelWorkflowExecutionResponse(
        const RequestCancelWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RequestCancelWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new RequestCancelWorkflowExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RequestCancelWorkflowExecutionRequest * RequestCancelWorkflowExecutionResponse::request() const
{
    Q_D(const RequestCancelWorkflowExecutionResponse);
    return static_cast<const RequestCancelWorkflowExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RequestCancelWorkflowExecution \a response.
 */
void RequestCancelWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RequestCancelWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RequestCancelWorkflowExecutionResponsePrivate
 * \brief The RequestCancelWorkflowExecutionResponsePrivate class provides private implementation for RequestCancelWorkflowExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RequestCancelWorkflowExecutionResponsePrivate object with public implementation \a q.
 */
RequestCancelWorkflowExecutionResponsePrivate::RequestCancelWorkflowExecutionResponsePrivate(
    RequestCancelWorkflowExecutionResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RequestCancelWorkflowExecution response element from \a xml.
 */
void RequestCancelWorkflowExecutionResponsePrivate::parseRequestCancelWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestCancelWorkflowExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
